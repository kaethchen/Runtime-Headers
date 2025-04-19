@class NSString, NSMutableDictionary, NSXMLElement, NSArray;

@interface SdefDocument : NSObject {
    NSXMLElement *_sdef_root;
    NSString *_basename;
    NSMutableDictionary *_type_dictionary;
    NSArray *_classes;
    NSArray *_records;
    NSArray *_commands;
    NSArray *_enumerations;
}

+ (id)intrinsic_types;

- (void)dealloc;
- (id)enumerations;
- (id)commands;
- (id)records;
- (id)classes;
- (id)elementForTypeName:(id)a0;
- (id)initWithSdef:(id)a0 basename:(id)a1;
- (id)objcName:(id)a0;
- (id)objcName:(id)a0 type:(int)a1;
- (struct typeinfo_t { id x0; id x1; id x2; id x3; BOOL x4; })typeInfoForElement:(id)a0;
- (struct typeinfo_t { id x0; id x1; id x2; id x3; BOOL x4; })typeInfoForType:(id)a0;

@end
