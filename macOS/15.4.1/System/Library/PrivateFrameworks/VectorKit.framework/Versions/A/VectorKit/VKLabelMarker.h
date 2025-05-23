@class NSArray;

@interface VKLabelMarker : VKMarker {
    struct shared_ptr<md::LabelMarker> { struct LabelMarker *__ptr_; struct __shared_weak_count *__cntrl_; } _labelMarker;
}

@property (nonatomic) BOOL isDragged;
@property (nonatomic) BOOL useVKSelectionBalloon;
@property (readonly, nonatomic) NSArray *shields;
@property (readonly, nonatomic) NSArray *transitSystems;
@property (readonly, nonatomic) NSArray *dataIconImageKeys;
@property (readonly, nonatomic) NSArray *iconImageKeys;
@property (readonly, nonatomic) NSArray *imageKeys;
@property (readonly, nonatomic) NSArray *relatedTexts;
@property (readonly, nonatomic) NSArray *relatedSubTexts;

+ (id)markerWithLabelMarker:(const void *)a0;

- (void).cxx_destruct;
- (id)locale;
- (id).cxx_construct;
- (struct { double x0; double x1; })coordinate;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; })_bounds;
- (unsigned long long)elementCount;
- (BOOL)isOccluded;
- (BOOL)isSelectable;
- (BOOL)isSelected;
- (BOOL)isVisible;
- (id)text;
- (unsigned long long)clientFeatureID;
- (unsigned long long)venueID;
- (unsigned long long)animationID;
- (float)buildingFaceAzimuth;
- (unsigned long long)businessID;
- (id)featureHandles;
- (int)featureType;
- (BOOL)hasBusinessID;
- (id)incident;
- (BOOL)isTransit;
- (id)mapRegion;
- (id)routeInfo;
- (id)trafficCamera;
- (id)waypointInfo;
- (unsigned long long)countFeatureIDs;
- (unsigned long long)venueBuildingID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calloutAnchorRect;
- (id)featureAnnotation;
- (BOOL)isFlyoverTour;
- (BOOL)isLabelHitAtScreenPoint:(struct CGPoint { double x0; double x1; })a0 selectableLabelsOnly:(BOOL)a1;
- (BOOL)isOneWayArrow;
- (BOOL)isRouteEta;
- (BOOL)isTrafficIncident;
- (BOOL)isTransitLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenCollisionBounds;
- (int)selectionType;
- (unsigned long long)venueComponentID;
- (short)venueFloorOrdinal;
- (unsigned long long)venueLevelID;
- (BOOL)isCluster;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBounds;
- (float)facingDirection;
- (BOOL)isTrafficCamera;
- (const void *)labelMarkerImpl;
- (BOOL)isRouteWaypoint;
- (BOOL)isTrail;
- (int)sortKey;
- (id)subtext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calloutAnchorRect:(BOOL)a0;
- (id)arWalkingFeature;
- (float)buildingHeight;
- (struct CGPoint { double x0; double x1; })calloutAnchorPointWithSnapToPixels:(BOOL)a0;
- (id)clusterContentBounds;
- (id)clusterFeatureAnnotations;
- (unsigned long long)clusterFeatureCount;
- (id)clusterWaypointInfos;
- (struct { double x0; double x1; double x2; })coordinate3D;
- (id)debugAnchorPointString;
- (unsigned char)externalFeatureCategory;
- (const unsigned long long *)featureIDs;
- (unsigned long long)featureLabelIdentifier;
- (BOOL)hasBuildingFaceAzimuth;
- (BOOL)hasFacingDirection;
- (BOOL)hasVenueLookInsideFloorOrdinal;
- (id)initWithLabelMarkerPtr:(const void *)a0;
- (BOOL)isARWalkingFeature;
- (BOOL)isAlongSelectedTransitLine;
- (BOOL)isClusterChild;
- (BOOL)isLeafCluster;
- (BOOL)isOnRoute;
- (BOOL)isRouteAnnotation;
- (BOOL)isTextVisible;
- (BOOL)isTransitAccessPoint;
- (BOOL)isVenueButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lateralCalloutAnchorRect;
- (id)parentClusterLabelMarker;
- (unsigned char)pickedLabelBalloonBehavior;
- (BOOL)positionOfInterest:(struct { double x0; double x1; } *)a0 zoom:(float *)a1;
- (id)routeAnnotations;
- (void)setLabelPressed:(BOOL)a0;
- (unsigned char)venueComponentType;
- (short)venueLookInsideFloorOrdinal;

@end
