@interface PGPeopleTitleUtility : NSObject

+ (id)_placeDisplayNameForPeopleAddressNodeLabel:(id)a0 titleComponent:(id)a1 containsMe:(BOOL)a2;
+ (id)beautifiedLocationStringWithPersonNode:(id)a0 peopleAddressEdge:(id)a1 titleComponent:(id)a2 insertLineBreak:(BOOL)a3 allowFamilyHome:(BOOL)a4 serviceManager:(id)a5;
+ (id)nameFromPersonNode:(id)a0 serviceManager:(id)a1;
+ (id)nameStringForPersonNodes:(id)a0 includeMe:(BOOL)a1 allowUnnamed:(BOOL)a2 allowedGroupsFormat:(unsigned long long)a3 insertLineBreaks:(BOOL)a4 serviceManager:(id)a5;
+ (id)nameStringForPersonNodes:(id)a0 includeMe:(BOOL)a1 insertLineBreaks:(BOOL)a2 serviceManager:(id)a3;
+ (id)peopleGroupNameForPersonNodes:(id)a0 allowedGroupsFormat:(unsigned long long)a1;
+ (id)peopleGroupNameForPersonNodes:(id)a0 allowedGroupsFormat:(unsigned long long)a1 fallbackToGeneric:(BOOL)a2;

@end
