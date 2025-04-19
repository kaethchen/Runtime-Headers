@class NSNumber;

@interface EMGroupedSenderChange : EMMessageListItemChange

@property (retain, nonatomic) NSNumber *unreadCount;
@property (retain, nonatomic) NSNumber *unseenCount;

+ (BOOL)supportsSecureCoding;
+ (id)changeFrom:(id)a0 to:(id)a1;
+ (id)changeForKeyPaths:(id)a0 ofItem:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addChange:(id)a0;
- (BOOL)applyToMessageListItem:(id)a0;
- (id)changeDescriptionsForInternal:(BOOL)a0 useDebugDescriptions:(BOOL)a1;

@end
