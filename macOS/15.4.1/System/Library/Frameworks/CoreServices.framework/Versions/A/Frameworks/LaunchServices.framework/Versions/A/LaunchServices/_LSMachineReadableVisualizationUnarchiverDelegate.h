@class NSSet, NSDictionary, NSString, NSMutableDictionary;

@interface _LSMachineReadableVisualizationUnarchiverDelegate : NSObject <_CSVisualizationUnarchiverDelegate> {
    unsigned int _catalogID;
    NSMutableDictionary *_tableNames;
    NSMutableDictionary *_unitDescs;
}

@property (copy) NSSet *tableNamesToMatch;
@property (readonly) NSDictionary *loadedTableNames;
@property (readonly) NSDictionary *loadedUnitDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
