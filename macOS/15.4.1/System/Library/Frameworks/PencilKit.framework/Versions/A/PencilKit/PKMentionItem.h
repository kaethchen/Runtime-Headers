@class NSString, NSUUID;

@interface PKMentionItem : PKDetectionItem

@property (readonly, nonatomic) NSString *mentionResult;
@property (readonly, nonatomic) NSUUID *mentionUUID;
@property (readonly, nonatomic) BOOL active;

+ (id)mentionItemWithQueryItem:(id)a0 sessionManager:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)setActive:(BOOL)a0;
- (id)strokeColor;
- (id)_actionNameForActivation:(BOOL)a0;
- (id)_baselinePath;
- (void)clearActiveInDrawing:(id)a0;
- (void)invalidateUUID;

@end
