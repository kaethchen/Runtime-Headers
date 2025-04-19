@class NSString, NSArray, NSDictionary, TCSmartRepliesResponse;

@interface TextComposer.TCTextCompositionSpotlightReader : NSObject

@property (class, nonatomic, readonly) NSString *messagesSpotlightBundleId;
@property (class, nonatomic, readonly) NSString *mailSpotlightBundleId;

- (id)init;
- (void).cxx_destruct;
- (void)getPrecomputedSmartRepliesResponseTextsWithBundleId:(NSString *)a0 ids:(NSArray *)a1 completionHandler:(void (^)(NSDictionary *))a2;
- (void)getPrecomputedSmartRepliesResponseWithBundleId:(NSString *)a0 id:(NSString *)a1 completionHandler:(void (^)(TCSmartRepliesResponse *))a2;
- (void)getPrecomputedSmartRepliesResponseWithBundleId:(NSString *)a0 text:(NSString *)a1 senderIdentifier:(NSString *)a2 completionHandler:(void (^)(TCSmartRepliesResponse *))a3;

@end
