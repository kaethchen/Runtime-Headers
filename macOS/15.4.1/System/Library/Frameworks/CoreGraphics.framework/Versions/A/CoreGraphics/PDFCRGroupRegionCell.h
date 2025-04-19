@interface PDFCRGroupRegionCell : PDFCRGroupRegion

@property unsigned long long groupID;
@property unsigned long long rowIndex;

- (id)initWithBoundingQuad:(id)a0 layoutDirection:(unsigned long long)a1 subregions:(id)a2 parent:(id)a3 groupID:(unsigned long long)a4 rowIndex:(unsigned long long)a5;

@end
