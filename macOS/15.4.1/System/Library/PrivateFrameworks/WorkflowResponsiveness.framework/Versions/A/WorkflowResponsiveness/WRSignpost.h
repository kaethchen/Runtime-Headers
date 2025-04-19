@class NSString, NSArray;

@interface WRSignpost : NSObject {
    BOOL _eventIdentifierIsSignpostID;
}

@property (readonly) NSString *subsystem;
@property (readonly) NSString *category;
@property (readonly) NSString *name;
@property (readonly) NSString *eventIdentifierFieldName;
@property (readonly) BOOL eventIdentifierIsSignpostID;
@property (readonly) NSString *individuationFieldName;
@property (readonly) NSArray *environmentFieldNames;
@property (readonly) BOOL networkBound;
@property (readonly) NSArray *diagnostics;
@property (readonly) int diagnosticThresholdCount;
@property (readonly) BOOL hasDiagnosticThresholdCount;
@property (readonly) double diagnosticThresholdIntervalSeconds;
@property (readonly) BOOL hasDiagnosticThresholdInterval;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 eventIdentifierFieldName:(id)a3 individuationFieldName:(id)a4 environmentFieldNames:(id)a5 networkBound:(BOOL)a6 diagnostics:(id)a7;

@end
