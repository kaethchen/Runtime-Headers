@class NSColor, NSString, AMSProcessInfo;

@interface AMSUIReviewContext : NSObject

@property (readonly) NSColor *accentColor;
@property (readonly) long long mediaTaskType;
@property (readonly) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *itemIdentifier;

- (void).cxx_destruct;
- (id)initWithAccentColor:(id)a0 mediaTaskType:(long long)a1 clientInfo:(id)a2 itemIdentifier:(id)a3;

@end
