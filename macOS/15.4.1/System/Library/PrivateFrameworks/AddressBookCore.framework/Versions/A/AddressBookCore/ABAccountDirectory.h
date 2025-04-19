@class NSString;
@protocol ABSearchOperationsFactory;

@interface ABAccountDirectory : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) id<ABSearchOperationsFactory> searchOperationsFactory;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 searchOperationsFactory:(id)a2;

@end
