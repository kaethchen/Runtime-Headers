@class NSString, NSView;
@protocol CNContactPickerSectionDelegate;

@interface CNContactPickerSection : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSString *displayName;
@property (readonly) NSView *contentView;
@property (readonly) NSView *rightTopBarView;
@property (readonly) id<CNContactPickerSectionDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 contentView:(id)a1 rightTopBarView:(id)a2;
- (id)initWithDisplayName:(id)a0 contentView:(id)a1 rightTopBarView:(id)a2 delegate:(id)a3;

@end
