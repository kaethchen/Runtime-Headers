@class NSDictionary, CSSearchableItemAttributeSet;

@interface ICNoteBaseUserActivityState : NSObject

@property (retain, nonatomic) CSSearchableItemAttributeSet *attributeSet;
@property (readonly, copy, nonatomic) NSDictionary *contentAttributes;

- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (void)updateUserActivity:(id)a0;

@end
