@interface _GEORouteMatcherScoreInfo : NSObject {
    long long _type;
    double _rawScore;
    double _weight;
}

- (id)debugDescription;
- (id)_typeString;

@end
