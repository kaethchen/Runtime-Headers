@interface _NSTableUtilities : NSObject

+ (id)_referenceBinderForTableColumn:(id)a0;
+ (void)_breakConnectionOfTableBinderIfAutoCreated:(id)a0;
+ (id)_referenceBinderAtIndex:(unsigned long long)a0 forTableView:(id)a1;
+ (void)_registerTableColumnBinder:(id)a0 toTableColumn:(id)a1 autoCreateReferenceController:(id)a2;
+ (void)_setPartialKeysWithTableBinder:(id)a0 forAllTableColumnBindersOfTableView:(id)a1;
+ (void)_setPartialKeysWithTableBinder:(id)a0 forTableColumnBinder:(id)a1;
+ (id)_tableBinderForTableView:(id)a0;
+ (BOOL)_tableBinderForTableViewSupportsSorting:(id)a0;
+ (void)_unregisterTableColumnBinder:(id)a0 fromTableColumn:(id)a1;

@end
