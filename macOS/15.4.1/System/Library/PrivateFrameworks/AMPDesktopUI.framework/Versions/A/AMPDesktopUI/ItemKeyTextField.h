@class ViewSpyInfoKeyItem, NSObject;

@interface ItemKeyTextField : NSTextField

@property (retain, nonatomic) ViewSpyInfoKeyItem *item;
@property (retain, nonatomic) NSObject *targetObject;

+ (id)fieldWithItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)changed:(id)a0;

@end
