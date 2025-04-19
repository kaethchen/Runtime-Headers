@class NSLock, NSString;
@protocol AMSBagProtocol;

@interface AMSODISession : NSObject {
    NSString *_cacheIdentifier;
}

@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSLock *lock;
@property (readonly) unsigned long long accountType;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *cacheIdentifier;
@property (readonly, copy) NSString *sessionIdentifier;

+ (BOOL)provideFeedbackOnPayloadOutcome:(unsigned long long)a0 cacheIdentifier:(id)a1 bag:(id)a2;

- (void).cxx_destruct;
- (id)_createODISession;
- (id)getAssessment;
- (id)initWithSessionIdentifier:(id)a0 accountType:(unsigned long long)a1 bag:(id)a2;
- (id)initWithSessionIdentifier:(id)a0 accountType:(unsigned long long)a1 bundleIdentifier:(id)a2 bag:(id)a3;
- (void)setCacheIdentifier:(id)a0;
- (BOOL)updateWithAttributes:(id)a0;

@end
