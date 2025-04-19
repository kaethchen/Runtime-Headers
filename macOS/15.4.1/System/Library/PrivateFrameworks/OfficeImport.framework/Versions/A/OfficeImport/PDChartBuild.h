@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (id)initWithBuildType:(int)a0;

@end
