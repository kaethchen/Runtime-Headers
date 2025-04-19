@class NSString, NSArray;

@interface HMFMessageBinding : HMFObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *policies;
@property (readonly) SEL selector;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 policies:(id)a1 selector:(SEL)a2;

@end
