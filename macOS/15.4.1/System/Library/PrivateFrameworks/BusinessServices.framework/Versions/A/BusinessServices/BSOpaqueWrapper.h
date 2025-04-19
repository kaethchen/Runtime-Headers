@class _BSOpaqueWrapper;

@interface BSOpaqueWrapper : NSObject

@property (readonly, retain, nonatomic) _BSOpaqueWrapper *opaqueWrapper;
@property (readonly, retain, nonatomic) id wrappedThing;

+ (id)wrapperFor:(id)a0;

- (void).cxx_destruct;
- (id)initWithThing:(id)a0;

@end
