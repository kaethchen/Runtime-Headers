@class NSMutableArray;

@interface ATXFakeEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *identifiersAndDates;

- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)initFromJSON:(id)a0;

@end
