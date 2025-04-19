@class NSString, PKColor;

@interface PKSeat : NSObject {
    unsigned long long _attributes;
}

@property (readonly, copy, nonatomic) NSString *designation;
@property (readonly, copy, nonatomic) NSString *row;
@property (readonly, copy, nonatomic) NSString *section;
@property (readonly, copy, nonatomic) NSString *aisle;
@property (readonly, copy, nonatomic) NSString *level;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) PKColor *sectionColor;
@property (readonly, copy, nonatomic) NSString *seatDescription;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)createFromDictionary:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initFromDictionary:(id)a0;
- (BOOL)containsAttributes:(unsigned long long)a0;
- (unsigned long long)diffFromSeat:(id)a0;
- (BOOL)intersectsAttributes:(unsigned long long)a0;
- (BOOL)isEqualToSeat:(id)a0;

@end
