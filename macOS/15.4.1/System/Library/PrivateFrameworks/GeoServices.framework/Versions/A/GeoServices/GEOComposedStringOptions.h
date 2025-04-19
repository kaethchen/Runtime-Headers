@class NSArray, NSDictionary;

@interface GEOComposedStringOptions : NSObject <NSCopying> {
    BOOL _isUpdatingFormatString;
}

@property (retain, nonatomic) NSArray *arguments;
@property (nonatomic) BOOL createAttributedString;
@property (nonatomic) BOOL preserveIndividualComponents;
@property (retain, nonatomic) NSDictionary *stringAttributes;
@property (copy, nonatomic) id /* block */ formatStyleHandler;
@property (nonatomic) BOOL shouldUpdateFormatStrings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
