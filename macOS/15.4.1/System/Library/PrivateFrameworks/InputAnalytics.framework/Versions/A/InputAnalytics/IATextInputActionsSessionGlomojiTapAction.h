@class NSString;

@interface IATextInputActionsSessionGlomojiTapAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long glomojiType;
@property (copy, nonatomic) NSString *originalInputMode;
@property (copy, nonatomic) NSString *updatedInputMode;
@property (nonatomic) long long mergedActionsCount;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)a0;

@end
