#ifndef mtrk_common_h
#define mtrk_common_h 1

#include <iostream>
#include <string>
#include <fstream>
#include "MrServers/MrImaging/libSeqUtil/libSeqUtil.h" 

#define MTRK_DEFS_COUNTERS 64
#define MTRK_DEFS_FLOATS   64

#define MTRK_COUNTER_SLICE 0

#define MTRK_SECTIONS_FILE            "file"
#define MTRK_SECTIONS_SETTINGS        "settings"
#define MTRK_SECTIONS_INFOS           "infos"
#define MTRK_SECTIONS_INSTRUCTIONS    "instructions"
#define MTRK_SECTIONS_OBJECTS         "objects"
#define MTRK_SECTIONS_ARRAYS          "arrays"
#define MTRK_SECTIONS_EQUATIONS       "equations"
#define MTRK_SECTIONS_GENERATOR       "generator"

#define MTRK_PROPERTIES_ACTION        "action"
#define MTRK_PROPERTIES_MEASUREMENT   "measurement"
#define MTRK_PROPERTIES_STEPS         "steps"
#define MTRK_PROPERTIES_ID            "id"
#define MTRK_PROPERTIES_TYPE          "type"
#define MTRK_PROPERTIES_ENCODING      "encoding"
#define MTRK_PROPERTIES_RANGE         "range"
#define MTRK_PROPERTIES_COUNTER       "counter"
#define MTRK_PROPERTIES_FLOAT         "float"
#define MTRK_PROPERTIES_INDEX         "index"
#define MTRK_PROPERTIES_BLOCK         "block"
#define MTRK_PROPERTIES_ARRAY         "array"
#define MTRK_PROPERTIES_VALUE         "value"
#define MTRK_PROPERTIES_TRUE          "true"
#define MTRK_PROPERTIES_FALSE         "false"
#define MTRK_PROPERTIES_TARGET        "target"
#define MTRK_PROPERTIES_TIME          "time"
#define MTRK_PROPERTIES_DURATION      "duration"
#define MTRK_PROPERTIES_SAMPLES       "samples"
#define MTRK_PROPERTIES_TAIL          "tail"
#define MTRK_PROPERTIES_OBJECT        "object"
#define MTRK_PROPERTIES_EQUATION      "equation"
#define MTRK_PROPERTIES_INCREMENT     "increment"
#define MTRK_PROPERTIES_DATA          "data"
#define MTRK_PROPERTIES_SIZE          "size"
#define MTRK_PROPERTIES_EVENT         "event"
#define MTRK_PROPERTIES_MEMINDEX      "memory_index" //"memindex"
#define MTRK_PROPERTIES_INITIAL_PHASE "initial_phase"
#define MTRK_PROPERTIES_THICKNESS     "thickness"
#define MTRK_PROPERTIES_FLIPANGLE     "flipangle"
#define MTRK_PROPERTIES_PURPOSE       "purpose"
#define MTRK_PROPERTIES_DWELLTIME     "dzell_time" //"dwelltime"
#define MTRK_PROPERTIES_AMPLITUDE     "amplitude"
#define MTRK_PROPERTIES_AXIS          "axis"
#define MTRK_PROPERTIES_FREQUENCY     "frequency"
#define MTRK_PROPERTIES_PHASE         "phase"
#define MTRK_PROPERTIES_ADDED_PHASE   "added_phase"
#define MTRK_PROPERTIES_MEASUREMENT_DATA_HEADER /*MTRK_PROPERTIES_MDH*/           "measurement_data_header" //"mdh"
#define MTRK_PROPERTIES_COMMENT       "comment"
#define MTRK_PROPERTIES_MESSAGE       "message"

#define MTRK_OPTIONS_MAIN             "main"
#define MTRK_OPTIONS_BLOCK            "block"
#define MTRK_OPTIONS_COUNTER_INC      "counter_increment" //"counter_inc"
#define MTRK_OPTIONS_COUNTER_SET      "counter_set"
#define MTRK_OPTIONS_FLOAT_INC        "float_increment" //"float_inc"
#define MTRK_OPTIONS_FLOAT_SET        "float_set"
#define MTRK_OPTIONS_FLOAT_GET        "float_get"
#define MTRK_OPTIONS_RFSPOIL          "float_rfspoil"
#define MTRK_OPTIONS_EQUATION         "equation"
#define MTRK_OPTIONS_BASE64           "base64"
#define MTRK_OPTIONS_TEXT             "text"
#define MTRK_OPTIONS_INT              "integer" //"int"
#define MTRK_OPTIONS_FLOAT            "float"
#define MTRK_OPTIONS_ARRAY            "array"
#define MTRK_OPTIONS_COUNTER          "counter"
#define MTRK_OPTIONS_FLIP             "flip"
#define MTRK_OPTIONS_COMPLEX_FLOAT    "complex_float"
#define MTRK_OPTIONS_DOUBLE           "double"
#define MTRK_OPTIONS_COMPLEX_DOUBLE   "complex_double"
#define MTRK_OPTIONS_EXCITATION       "excitation"
#define MTRK_OPTIONS_REFOCUS          "refocus"
#define MTRK_OPTIONS_INVERSION        "inversion"
#define MTRK_OPTIONS_READ             "read"
#define MTRK_OPTIONS_PHASE            "phase"
#define MTRK_OPTIONS_SLICE            "slice"
#define MTRK_OPTIONS_VALUE            "value"

#define MTRK_ACTIONS_LOOP             "loop"
#define MTRK_ACTIONS_CONDITION        "condition"
#define MTRK_ACTIONS_RUN_BLOCK        "run_block"
#define MTRK_ACTIONS_INIT             "init"
#define MTRK_ACTIONS_SUBMIT           "submit"
#define MTRK_ACTIONS_RF               "rf"
#define MTRK_ACTIONS_ADC              "adc"
#define MTRK_ACTIONS_GRAD             "gradient" //"grad" is that for creating a gradient event? or specifying gradient amplitude?
#define MTRK_ACTIONS_SYNC             "synchronisation" //"sync" may be unclear
#define MTRK_ACTIONS_MARK             "mark"
#define MTRK_ACTIONS_CALC             "calculation" //"calc"
#define MTRK_ACTIONS_DEBUG            "debug"

#define MTRK_MDH_LINE                 "line"
#define MTRK_MDH_SLICE                "slice"
#define MTRK_MDH_PARTITION            "partition"
#define MTRK_MDH_ACQUISITION          "acquisition"
#define MTRK_MDH_ECHO                 "echo"
#define MTRK_MDH_REPETITION           "repetition"
#define MTRK_MDH_SEGMENT              "segment"
#define MTRK_MDH_SET                  "set"
#define MTRK_MDH_IDA                  "ida" // this is very unclear. Are these a bunch of IDs? What do they refer to?
#define MTRK_MDH_IDB                  "idb" // are they free?
#define MTRK_MDH_IDC                  "idc"
#define MTRK_MDH_IDD                  "idd"
#define MTRK_MDH_IDE                  "ide"
#define MTRK_MDH_CENTER_LINE          "center_line"
#define MTRK_MDH_CENTER_PARTITION     "center_partition"
#define MTRK_MDH_CENTER_COLUMN        "center_column"
#define MTRK_MDH_FIRST_SCAN_SLICE     "first_scan_in_slice" //"first_scan_slice"
#define MTRK_MDH_LAST_SCAN_SLICE      "last_scan_in_slice" //"last_scan_slice"
#define MTRK_MDH_LAST_SCAN_MEAS       "last_scan_in_measurement" //"last_scan_meas"
#define MTRK_MDH_LAST_SCAN_CONCAT     "last_scan_in_concatenation" //"last_scan_concat"
#define MTRK_MDH_LAST_LINE            "last_line"
#define MTRK_MDH_ICE_PARAMETER        "ice_parameter"
#define MTRK_MDH_RAWDATACORRECTION    "rawdata_correction"
#define MTRK_MDH_SWAPPED              "swapped"
#define MTRK_MDH_PAT_REF              "parallel_acquisition_reference_scan" //"patrefscan"
#define MTRK_MDH_PAT_REFIMA           "parallel_acquisition_reference_and_image_scan" //"patrefimascan"

#define MTRK_INFOS_FOV                "field_of_view" //"fov"
#define MTRK_INFOS_SEQSTRING          "sequence_name" //"seqstring"
#define MTRK_INFOS_DESCRIPTION        "description"
#define MTRK_INFOS_RECONSTRUCTION     "reconstruction"
#define MTRK_INFOS_PELINES            "pelines"

#define MTRK_SETTINGS_READOUT_OS      "readout_os"
#define MTRK_SETTINGS_SLICES          "slices"

//#define MTRK_LOG(x)                   std::cout << x << std::endl;
#define MTRK_LOG(x)                     { std::ostringstream s; s << x; TRACE_PUT0(TC_ALWAYS, TF_SEQ, s.str().c_str()); }         

#define MTRK_DELETE(x)                if (x!=0) { delete x; x=0; }
#define MTRK_RETONFAIL(x)             if (!x) { return false; }
#define MTRK_RETONFAILMSG(x,y)        if (!x) { return false; MTRK_LOG(y) }
#define MTRK_GETITEM(a,b,c)           cJSON* c = cJSON_GetObjectItemCaseSensitive(a,b); if (c==NULL) { MTRK_LOG("Missing item: " << b) return false; }
#define MTRK_GETITEMOPT(a,b,c)        cJSON* c = cJSON_GetObjectItemCaseSensitive(a,b);
#define MTRK_CHECKRANGE(a,b,c,d)      if ((a < b) || (a >=c)) { MTRK_LOG("ERROR: Index out of range " << d) return false; }

#endif
