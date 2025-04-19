@interface CNContactListRowView : NSTableRowView

@property (nonatomic) long long headerVisualEffectMaterial;

+ (id)rowView;
+ (id)headerRowView;
+ (id)postHeaderRowView;

- (BOOL)allowsVibrancy;

@end
