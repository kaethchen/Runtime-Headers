@interface IATextInputActionsSessionReplaceWithCandidateAction : IATextInputActionsSessionAction

@property (nonatomic) long long replaceWithCandidateType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)changedContent;
- (BOOL)isCapableOfTextInsertion;

@end
