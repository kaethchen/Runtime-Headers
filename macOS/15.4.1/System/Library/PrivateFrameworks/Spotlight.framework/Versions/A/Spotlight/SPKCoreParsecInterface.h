@class PRSSearchSession, NSString, NSDictionary, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SPKCoreParsecInterface : NSObject <PRSSearchQueryHandler, SPKCoreParsecInterfaceProtocol, PRSBagFetchSuccessDelegate> {
    NSString *_userAgentString;
    NSString *_queryLanguage;
}

@property BOOL parsecEnabled;
@property (retain) PRSSearchSession *searchSession;
@property (retain) NSObject<OS_dispatch_queue> *sharedQueue;
@property struct __CFDictionary { } *_objectMap;
@property struct __CFDictionary { } *_replyMap;
@property double gSessionStartTime;
@property (retain) NSString *userAgentString;
@property long long sessionOnceToken;
@property (retain) NSMutableArray *_updateChangedBlocks;
@property (retain) NSDictionary *sqfData;
@property (retain) NSArray *parsecCategoryOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)getSharedInstance;
+ (void)setSharedFeedbackListener:(id)a0;
+ (id)sharedFeedbackListener;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activate:(double)a0;
- (void)deactivate;
- (void)cancelQuery:(long long)a0;
- (void)setParsecState:(BOOL)a0;
- (void)bagFetchSuccessCallback;
- (void)connectionChanged:(id /* block */)a0;
- (void)getCEPDataWithReply:(id /* block */)a0;
- (void)getCannedCEPDataWithReply:(id /* block */)a0;
- (void)getFTEStringsWithReply:(id /* block */)a0;
- (id)getFeedbackListener;
- (void)getSQFDataAndParsecOrderWithReply:(id /* block */)a0;
- (void)query:(id)a0 didFinishWithResults:(id)a1 withSuggestions:(id)a2 withCorrections:(id)a3 withAlternativeResults:(id)a4 suggestionsAreBlended:(BOOL)a5;
- (void)queryWithString:(id)a0 externalId:(unsigned int)a1 queryContext:(id)a2 withReply:(id /* block */)a3;
- (void)resumeQuery:(long long)a0 withReply:(id /* block */)a1;
- (double)searchRenderTimeout;
- (void)setUserQueryLanguage:(id)a0;
- (BOOL)vetURLForResult:(id)a0;

@end
