/*
 * Utilities and non-trivial high level functions
 * 
 * Utilities that are provided for convenience but can be reused in
 * multiple parts of GTKWave.
 */

#include "utils.h"
#include "globals.h"
#include <string.h>


GwTime get_current_time(void)
{
    GwMarker *primary_marker = gw_project_get_primary_marker(GLOBALS->project);
    if (!primary_marker || !gw_marker_is_enabled(primary_marker))
        return 0 ;
    else 
        return gw_marker_get_position(primary_marker);
}

