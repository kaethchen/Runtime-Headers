@class NSString;

@interface SLFetchShareableContentAction : SLShareableContentAction

@property (readonly, copy, nonatomic) NSString *requestedTypeIdentifier;
@property (readonly, nonatomic) long long requestedItemProviderIndex;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 requestedItemProviderIndex:(long long)a2 responseHandler:(id /* block */)a3;

@end
