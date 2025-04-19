@class NSString;

@interface GraphAPIGetMessageDeltaRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *deltaToken;
@property (copy, nonatomic) NSString *deltaLink;

- (void).cxx_destruct;
- (id)resource;

@end
