@class EXSItemIDType, NSDateComponents;

@interface EXSOccurrence : NSObject

@property (retain, nonatomic) EXSItemIDType *itemID;
@property (retain, nonatomic) NSDateComponents *start;
@property (retain, nonatomic) NSDateComponents *end;
@property (retain, nonatomic) NSDateComponents *originalStart;

+ (id)initWithPropertiesDictionary:(id)a0;

- (void).cxx_destruct;
- (id)deriveJSONRepresentation;

@end
