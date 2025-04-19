@class NSXPCConnection, NSDate, NSString, NSSet, NSCondition, NSDictionary, NSOperationQueue, MLMediaLibrary;
@protocol MLSMediaLibraryProtocol;

@interface MLMediaLibraryImpl : NSObject <MLMediaLibraryProtocol> {
    NSSet *_mediaGroupAttributesExpectedClasses;
    NSSet *_mediaObjectAttributesExpectedClasses;
    NSSet *_mediaSourceAttributesExpectedClasses;
}

@property MLMediaLibrary *mediaLibrary;
@property (copy) NSDictionary *options;
@property (copy) NSDictionary *mediaSourcesByIdentifier;
@property (retain) NSXPCConnection *connection;
@property (readonly) id<MLSMediaLibraryProtocol> service;
@property (retain, nonatomic) NSDate *loadMediaSourcesStartTime;
@property (retain) NSOperationQueue *outboundRequestQueue;
@property (retain) NSCondition *outboundRequestCondition;
@property BOOL outboundRequestInFlight;
@property (readonly, retain) NSSet *mediaObjectAttributesExpectedClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidateConnection;
- (void)connectToService;
- (void)_cancelOutstandingSynchronousRequests;
- (void)_nullOutLibraryPointers;
- (id)_unarchivedMediaGroupAttributesDictionaryFromData:(id)a0;
- (void)_xpcConnectionWasInterrupted;
- (void)_xpcConnectionWasInvalidated;
- (void)determineLogLevel;
- (id)mediaSourceForIdentifier:(id)a0;
- (void)rootGroupData:(id)a0 forMediaSource:(id)a1;
- (void)setAttributesData:(id)a0 forMediaGroup:(id)a1 inMediaSource:(id)a2;
- (void)setAttributesData:(id)a0 forMediaObject:(id)a1 inMediaSource:(id)a2;
- (void)updateMediaSources:(id)a0;

@end
