@class NSString;

@interface DCCityMapperURLGenerator : DCMapsURLGenerator

@property (retain, nonatomic) NSString *startCoordinate;
@property (retain, nonatomic) NSString *endCoordinate;

+ (void)generateURLWithMapsLink:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)host;
- (id)path;
- (id)scheme;
- (void)populateQueryDictionary;

@end
