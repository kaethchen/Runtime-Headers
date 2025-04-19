@interface OADPointTextSpacing : OADTextSpacing {
    int mPoints;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)points;
- (id)initWithPoints:(int)a0;

@end
