@class NSScriptClassDescription;

@interface NSScriptObjectTypeDescription : NSScriptTypeDescription {
    NSScriptClassDescription *_classDescription;
}

- (void)dealloc;
- (id)name;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (unsigned int)appleEventCode;
- (id)classDescription;
- (id)initWithClassDescription:(id)a0;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;

@end
