@interface MTRClusterTimeFormatLocalization : MTRGenericCluster

- (void)writeAttributeHourFormatWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveCalendarTypeWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeHourFormatWithParams:(id)a0;
- (id)readAttributeSupportedCalendarTypesWithParams:(id)a0;
- (void)writeAttributeActiveCalendarTypeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeActiveCalendarTypeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeHourFormatWithValue:(id)a0 expectedValueInterval:(id)a1;

@end
