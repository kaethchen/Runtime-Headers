@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (id)description;
- (id)name;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (int)referenceFrame;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasResultProviderID;
- (BOOL)_isInLinkedPlaceRelationship;
- (BOOL)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (id)_styleAttributes;
- (id)initWithLinkedPlace:(id)a0;

@end
