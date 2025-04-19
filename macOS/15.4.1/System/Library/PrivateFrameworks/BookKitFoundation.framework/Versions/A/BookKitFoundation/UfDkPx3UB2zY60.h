@class NSString;

@interface UfDkPx3UB2zY60 : NSObject <AVContentKeySessionDelegate>

@property (nonatomic) int audibleDRMGroupID;
@property (copy, nonatomic) id /* block */ contentKeyFinishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;
- (void)contentKeySession:(id)a0 contentKeyRequestDidSucceed:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (id)initWithDRMGroupID:(int)a0;

@end
