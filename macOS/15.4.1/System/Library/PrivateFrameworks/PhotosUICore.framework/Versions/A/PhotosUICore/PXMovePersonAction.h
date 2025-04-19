@class NSArray, NSString, PXPhotoLibraryLocalDefaults, NSNumber;
@protocol PXFastEnumeration;

@interface PXMovePersonAction : PXPhotosAction

@property (readonly, nonatomic) NSArray *sourcePeople;
@property (readonly, nonatomic) id<PXFastEnumeration> destinationPeople;
@property (readonly, nonatomic) long long destinationManualOrder;
@property (readonly, nonatomic) long long destinationType;
@property (readonly, nonatomic) NSString *targetLocalIdentifier;
@property (copy, nonatomic) NSArray *modifiedDestinationPeople;
@property (readonly, nonatomic) id<PXFastEnumeration> otherPeople;
@property (copy, nonatomic) NSArray *modifiedOtherPeople;
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (retain, nonatomic) NSNumber *sourceSortingType;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (void)changeRequestForUndo:(id)a0 updateType:(BOOL)a1;
- (id)initWithSourcePeople:(id)a0 destinationPeople:(id)a1 destinationManualOrder:(long long)a2 destinationType:(long long)a3 targetLocalIdentifier:(id)a4 otherPeople:(id)a5;
- (id)localizedActionName;

@end
