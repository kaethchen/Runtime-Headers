@class NSString, NSNumber;

@interface PKMediaSourceProperties : PKCollectionSpecialization <PKUserCodable>

@property (readonly) NSString *feedDirection;
@property (readonly) NSNumber *feedOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userCodableDictionary;

@end
