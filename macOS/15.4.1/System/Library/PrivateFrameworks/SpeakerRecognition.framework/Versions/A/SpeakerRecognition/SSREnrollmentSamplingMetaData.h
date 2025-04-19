@class NSNumber, NSString;

@interface SSREnrollmentSamplingMetaData : NSObject

@property (readonly, nonatomic) NSNumber *selectionStatus;
@property (readonly, nonatomic) NSString *voiceProfileId;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSelectionStatus:(id)a0 voiceProfileId:(id)a1;

@end
