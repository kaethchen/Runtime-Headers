@class NSArray;

@interface IRServiceIdentifierMapping : NSObject

@property (nonatomic) long long servicePackage;
@property (retain, nonatomic) NSArray *observerClientIdentifiers;

- (void).cxx_destruct;
- (id)initWithServicePackage:(long long)a0 observerClientIdentifiers:(id)a1;

@end
