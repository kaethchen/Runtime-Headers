@class NSArray, NSNumber, NSString;

@interface INWholeHouseAudioMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *speakerNames;
@property (readonly, copy) NSArray *speakerRooms;
@property (readonly, copy) NSArray *permanentNames;
@property (readonly, copy) NSArray *intentSpeakerNames;
@property (readonly, copy) NSArray *intentSpeakerRooms;
@property (readonly, copy) NSArray *intentDestinationSpeakers;
@property (readonly, copy) NSArray *intentPermanentNames;
@property (readonly, copy) NSArray *spokenEntityTypes;
@property (readonly, copy) NSArray *spokenEntityNames;
@property (readonly, copy) NSNumber *numberOfHomeAutomationWords;
@property (readonly, copy) NSNumber *isAllSpeakers;
@property (readonly, copy) NSNumber *isPauseOrStop;
@property (readonly, copy) NSNumber *isWholeHouseAudioCommand;
@property (readonly, copy) NSNumber *isInHere;
@property (readonly, copy) NSNumber *hasExcept;
@property (readonly, copy) NSNumber *isParticipatingSpeaker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithSpeakerNames:(id)a0 speakerRooms:(id)a1 permanentNames:(id)a2 intentSpeakerNames:(id)a3 intentSpeakerRooms:(id)a4 intentDestinationSpeakers:(id)a5 intentPermanentNames:(id)a6 spokenEntityTypes:(id)a7 spokenEntityNames:(id)a8 numberOfHomeAutomationWords:(id)a9 isAllSpeakers:(id)a10 isPauseOrStop:(id)a11 isWholeHouseAudioCommand:(id)a12 isInHere:(id)a13 hasExcept:(id)a14 isParticipatingSpeaker:(id)a15;

@end
