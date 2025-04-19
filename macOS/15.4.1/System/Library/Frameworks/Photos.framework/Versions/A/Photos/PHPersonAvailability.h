@class NSArray, NSDictionary;

@interface PHPersonAvailability : NSObject

@property unsigned long long availablePersonCount;
@property unsigned long long mdIDCount;
@property unsigned long long keyFaceCount;
@property unsigned long long keyFaceWithVUObservationIDCount;
@property unsigned long long nonzeroFaceCropsCount;
@property (readonly) NSArray *requestedDetectionTypes;
@property (readonly) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithRequestedDetectionTypes:(id)a0;

@end
