@class NSString;

@interface ATXShortcutsEditorSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numStepsInShortcutAtStart;
@property (nonatomic) unsigned long long numStepsInShortcutAtEnd;
@property (nonatomic) BOOL stepWasManuallyAdded;
@property (nonatomic) BOOL isLastSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumStepsInShortcutAtStart:(unsigned long long)a0;
- (BOOL)isEqualToATXShortcutsEditorSessionMetadata:(id)a0;

@end
