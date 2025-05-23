@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_INVocabularyItem : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSNumber *_intentSlotNameKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fieldTypeNumberForIntentSlotName:(id)a0;
+ (Class)externalObjectClass;
+ (long long)fieldTypeForIntentSlotName:(id)a0;

@end
