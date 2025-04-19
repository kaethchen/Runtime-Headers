@class QCPlugIn;

@interface QCPlugInPatch : QCPatch {
    QCPlugIn *_plugIn;
    unsigned long long _executionLevel;
    struct __CFDictionary { } *_inputValueCache;
    struct __CFDictionary { } *_propertyPorts;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)attributesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (BOOL)shouldCreateIvarPorts;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)description;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setUndoManager:(id)a0;
- (BOOL)setup:(id)a0;
- (id)_addInputPortWithClass:(Class)a0 forKey:(id)a1 attributes:(id)a2;
- (id)_addOutputPortWithClass:(Class)a0 forKey:(id)a1 attributes:(id)a2;
- (void)enable:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (void)cleanup:(id)a0;
- (void)disable:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)plugIn;

@end
