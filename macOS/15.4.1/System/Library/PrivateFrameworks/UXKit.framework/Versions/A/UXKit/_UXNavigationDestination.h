@class NSString, UXDestinationAuxiliaryStore, NSSet;

@interface _UXNavigationDestination : NSObject <UXNavigationDestination>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *destinationIdentifier;
@property (retain, nonatomic) NSString *destinationTitle;
@property (retain, nonatomic) UXDestinationAuxiliaryStore *destinationAuxiliaryStore;
@property (retain, nonatomic) NSSet *requiredDestinationAuxiliaryKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
