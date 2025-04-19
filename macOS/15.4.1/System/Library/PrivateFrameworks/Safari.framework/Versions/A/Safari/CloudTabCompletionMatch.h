@class WBSCloudTab;

@interface CloudTabCompletionMatch : WBSURLCompletionMatch

@property (readonly, nonatomic) WBSCloudTab *cloudTab;

- (id)init;
- (void).cxx_destruct;
- (id)title;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)initWithCloudTab:(id)a0 userInput:(id)a1 forQueryID:(long long)a2;

@end
