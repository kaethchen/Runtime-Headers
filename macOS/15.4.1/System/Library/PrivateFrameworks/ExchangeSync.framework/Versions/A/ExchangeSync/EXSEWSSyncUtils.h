@interface EXSEWSSyncUtils : NSObject

+ (long long)exsRecurrenceMonthFromEWSMonth:(long long)a0;
+ (id)createFieldURI:(long long)a0;
+ (id)extendedPropertyWithName:(id)a0 value:(id)a1;
+ (id)addSetItemFieldWithExtendedPropertyName:(id)a0 value:(id)a1;
+ (id)buildEWSRecurrenceFromProperties:(id)a0;
+ (id)buildEWSRecurrenceFromPropertiesCalendar:(id)a0;
+ (id)createDeleteItemFieldForField:(long long)a0;
+ (id)createExtendedFieldURI:(id)a0;
+ (id)createExtendedFieldURI:(id)a0 withType:(long long)a1;
+ (id)createSetFolderFieldForExtendedProperty:(id)a0 withValue:(id)a1;
+ (id)createSetFolderFieldForExtendedProperty:(id)a0 withValue:(id)a1 withType:(long long)a2;
+ (id)createSetFolderFieldForField:(long long)a0 withFolderType:(id)a1;
+ (id)createSetItemFieldForExtendedProperty:(id)a0 withItemType:(id)a1;
+ (id)createSetItemFieldForField:(long long)a0 withItemType:(id)a1;
+ (long long)eseGrantedDelegatePermissionForEWSDelegatePermission:(long long)a0;
+ (long long)ewsDelegatePermissionForESEGrantedDelegatePermission:(long long)a0;
+ (long long)ewsSensitivityFromEXSSensitivity:(long long)a0;
+ (long long)exsFirstDayOfWeekFromEWSFDOW:(long long)a0;
+ (long long)exsFirstDayOfWeekToEWSFDOW:(long long)a0;
+ (long long)exsRecurrenceDayOfWeekIndexFromEWSDOWIdx:(long long)a0;
+ (long long)exsRecurrenceDayOfWeekIndexToEWSDOWIdx:(long long)a0;
+ (unsigned long long)exsRecurrenceDaysOfWeeksFromEWSDaysOfWeek:(long long)a0;
+ (unsigned long long)exsRecurrenceDaysOfWeeksFromEWSDaysOfWeekIndex:(id)a0;
+ (long long)exsRecurrenceDaysOfWeeksToEWSDaysOfWeek:(unsigned long long)a0;
+ (id)exsRecurrenceDaysOfWeeksToEWSDaysOfWeekIndex:(unsigned long long)a0;
+ (long long)exsRecurrenceMonthToEWSMonth:(long long)a0;
+ (id)extendedPropertyWithName:(id)a0 value:(id)a1 withType:(long long)a2;
+ (BOOL)recurrenceDays:(unsigned long long)a0 contain:(unsigned long long)a1;
+ (id)translateDate:(id)a0 toTimeZone:(id)a1;

@end
