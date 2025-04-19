@class NSString;

@interface NSNibExternalObjectPlaceholder : NSObject <NSCoding>

@property (copy) NSString *externalObjectPlaceholderIdentifier;

+ (void)addMappingFromIdentifier:(id)a0 toEntry:(id)a1 forCoder:(id)a2;
+ (void)addMappings:(id)a0 forCoder:(id)a1;
+ (id)mappedEntryForCoder:(id)a0 withIdentifier:(id)a1;
+ (struct __CFDictionary { } *)placeholderDecodingMap;
+ (void)removeMappingForCoder:(id)a0 withIdentifier:(id)a1;
+ (void)removeMappingsForCoder:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
