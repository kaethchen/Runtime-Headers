@class NSArray, NSString, INDateComponentsRange;

@interface INMediaSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *activityNames;
@property (readonly) long long mediaType;
@property (readonly) long long sortOrder;
@property (readonly, copy) NSString *mediaName;
@property (readonly, copy) NSString *artistName;
@property (readonly, copy) NSString *albumName;
@property (readonly, copy) NSArray *genreNames;
@property (readonly, copy) NSArray *moodNames;
@property (readonly, copy) INDateComponentsRange *releaseDate;
@property (readonly) long long reference;
@property (readonly, copy) NSString *mediaIdentifier;
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
- (id)initWithMediaType:(long long)a0 sortOrder:(long long)a1 mediaName:(id)a2 artistName:(id)a3 albumName:(id)a4 genreNames:(id)a5 moodNames:(id)a6 releaseDate:(id)a7 reference:(long long)a8 mediaIdentifier:(id)a9;

@end
