@class NSString, NSArray, PXGadgetSpec;

@interface PXGadgetSection : NSObject {
    long long _changeCount;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *gadgets;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 gadgets:(id)a1;

@end
