@class NSNumber, NSArray;

@interface CBMutableService : CBService

@property (retain) NSNumber *ID;
@property (retain) NSArray *includedServices;
@property (retain) NSArray *characteristics;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handlePowerNotOn;
- (id)initWithType:(id)a0 primary:(BOOL)a1;

@end
