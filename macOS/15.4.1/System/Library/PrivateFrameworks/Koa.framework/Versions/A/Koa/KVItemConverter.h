@interface KVItemConverter : NSObject

+ (id)itemFromCascadeItem:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_AppIntentsEntity:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_AppShortcut:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_AppInfo:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_AppIntentsEnum:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_AutoShortcut:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_CalendarEvent:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_Contact:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_CustomTerm:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_FindMy:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_Fitness:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_GlobalTerm:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_Health:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_HomeEntity:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_HomeServiceArea:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_LearnedContact:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_LearnedMediaEntity:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_LocationOfInterest:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_MediaEntity:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_Podcast:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_RadioEntity:(id)a0 error:(id *)a1;
+ (id)_convertFromKVItemType_UserAccount:(id)a0 error:(id *)a1;
+ (unsigned short)cascadeFieldTypeFromFieldType:(long long)a0;
+ (id)cascadeItemFromItem:(id)a0 error:(id *)a1;
+ (unsigned short)cascadeItemTypeFromItemType:(long long)a0;
+ (long long)fieldTypeFromCascadeFieldType:(unsigned short)a0;
+ (long long)itemTypeFromCascadeItemType:(unsigned short)a0;

@end
