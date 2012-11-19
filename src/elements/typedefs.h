/*

  MusicXML Library
  Copyright (C) 2006,2007  Grame

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

  Grame Research Laboratory, 9 rue du Garet, 69001 Lyon - France
  research@grame.fr

*/

//======================================================================
// You should not modify this file!
// It is automatically generated from the MusicXML DTDs and from 
// template files (located in the templates folder). 
//======================================================================

#ifndef __typedefs__
#define __typedefs__

#include "elements.h"
#include "types.h"

namespace MusicXML2 
{

typedef SMARTP<musicxml<kComment> >					S_comment;
typedef SMARTP<musicxml<kProcessingInstruction> >	S_processing_instruction;

typedef SMARTP<musicxml<k_accent> >		S_accent;
typedef SMARTP<musicxml<k_accidental> >		S_accidental;
typedef SMARTP<musicxml<k_accidental_mark> >		S_accidental_mark;
typedef SMARTP<musicxml<k_accidental_text> >		S_accidental_text;
typedef SMARTP<musicxml<k_accord> >		S_accord;
typedef SMARTP<musicxml<k_accordion_high> >		S_accordion_high;
typedef SMARTP<musicxml<k_accordion_low> >		S_accordion_low;
typedef SMARTP<musicxml<k_accordion_middle> >		S_accordion_middle;
typedef SMARTP<musicxml<k_accordion_registration> >		S_accordion_registration;
typedef SMARTP<musicxml<k_actual_notes> >		S_actual_notes;
typedef SMARTP<musicxml<k_alter> >		S_alter;
typedef SMARTP<musicxml<k_appearance> >		S_appearance;
typedef SMARTP<musicxml<k_arpeggiate> >		S_arpeggiate;
typedef SMARTP<musicxml<k_articulations> >		S_articulations;
typedef SMARTP<musicxml<k_artificial> >		S_artificial;
typedef SMARTP<musicxml<k_attributes> >		S_attributes;
typedef SMARTP<musicxml<k_backup> >		S_backup;
typedef SMARTP<musicxml<k_bar_style> >		S_bar_style;
typedef SMARTP<musicxml<k_barline> >		S_barline;
typedef SMARTP<musicxml<k_barre> >		S_barre;
typedef SMARTP<musicxml<k_base_pitch> >		S_base_pitch;
typedef SMARTP<musicxml<k_bass> >		S_bass;
typedef SMARTP<musicxml<k_bass_alter> >		S_bass_alter;
typedef SMARTP<musicxml<k_bass_step> >		S_bass_step;
typedef SMARTP<musicxml<k_beam> >		S_beam;
typedef SMARTP<musicxml<k_beat_repeat> >		S_beat_repeat;
typedef SMARTP<musicxml<k_beat_type> >		S_beat_type;
typedef SMARTP<musicxml<k_beat_unit> >		S_beat_unit;
typedef SMARTP<musicxml<k_beat_unit_dot> >		S_beat_unit_dot;
typedef SMARTP<musicxml<k_beats> >		S_beats;
typedef SMARTP<musicxml<k_bend> >		S_bend;
typedef SMARTP<musicxml<k_bend_alter> >		S_bend_alter;
typedef SMARTP<musicxml<k_bookmark> >		S_bookmark;
typedef SMARTP<musicxml<k_bottom_margin> >		S_bottom_margin;
typedef SMARTP<musicxml<k_bracket> >		S_bracket;
typedef SMARTP<musicxml<k_breath_mark> >		S_breath_mark;
typedef SMARTP<musicxml<k_caesura> >		S_caesura;
typedef SMARTP<musicxml<k_cancel> >		S_cancel;
typedef SMARTP<musicxml<k_capo> >		S_capo;
typedef SMARTP<musicxml<k_chord> >		S_chord;
typedef SMARTP<musicxml<k_chromatic> >		S_chromatic;
typedef SMARTP<musicxml<k_clef> >		S_clef;
typedef SMARTP<musicxml<k_clef_octave_change> >		S_clef_octave_change;
typedef SMARTP<musicxml<k_coda> >		S_coda;
typedef SMARTP<musicxml<k_creator> >		S_creator;
typedef SMARTP<musicxml<k_credit> >		S_credit;
typedef SMARTP<musicxml<k_credit_image> >		S_credit_image;
typedef SMARTP<musicxml<k_credit_words> >		S_credit_words;
typedef SMARTP<musicxml<k_cue> >		S_cue;
typedef SMARTP<musicxml<k_damp> >		S_damp;
typedef SMARTP<musicxml<k_damp_all> >		S_damp_all;
typedef SMARTP<musicxml<k_dashes> >		S_dashes;
typedef SMARTP<musicxml<k_defaults> >		S_defaults;
typedef SMARTP<musicxml<k_degree> >		S_degree;
typedef SMARTP<musicxml<k_degree_alter> >		S_degree_alter;
typedef SMARTP<musicxml<k_degree_type> >		S_degree_type;
typedef SMARTP<musicxml<k_degree_value> >		S_degree_value;
typedef SMARTP<musicxml<k_delayed_turn> >		S_delayed_turn;
typedef SMARTP<musicxml<k_detached_legato> >		S_detached_legato;
typedef SMARTP<musicxml<k_diatonic> >		S_diatonic;
typedef SMARTP<musicxml<k_direction> >		S_direction;
typedef SMARTP<musicxml<k_direction_type> >		S_direction_type;
typedef SMARTP<musicxml<k_directive> >		S_directive;
typedef SMARTP<musicxml<k_display_octave> >		S_display_octave;
typedef SMARTP<musicxml<k_display_step> >		S_display_step;
typedef SMARTP<musicxml<k_display_text> >		S_display_text;
typedef SMARTP<musicxml<k_divisions> >		S_divisions;
typedef SMARTP<musicxml<k_doit> >		S_doit;
typedef SMARTP<musicxml<k_dot> >		S_dot;
typedef SMARTP<musicxml<k_double> >		S_double;
typedef SMARTP<musicxml<k_double_tongue> >		S_double_tongue;
typedef SMARTP<musicxml<k_down_bow> >		S_down_bow;
typedef SMARTP<musicxml<k_duration> >		S_duration;
typedef SMARTP<musicxml<k_dynamics> >		S_dynamics;
typedef SMARTP<musicxml<k_elevation> >		S_elevation;
typedef SMARTP<musicxml<k_elision> >		S_elision;
typedef SMARTP<musicxml<k_encoder> >		S_encoder;
typedef SMARTP<musicxml<k_encoding> >		S_encoding;
typedef SMARTP<musicxml<k_encoding_date> >		S_encoding_date;
typedef SMARTP<musicxml<k_encoding_description> >		S_encoding_description;
typedef SMARTP<musicxml<k_end_line> >		S_end_line;
typedef SMARTP<musicxml<k_end_paragraph> >		S_end_paragraph;
typedef SMARTP<musicxml<k_ending> >		S_ending;
typedef SMARTP<musicxml<k_ensemble> >		S_ensemble;
typedef SMARTP<musicxml<k_extend> >		S_extend;
typedef SMARTP<musicxml<k_eyeglasses> >		S_eyeglasses;
typedef SMARTP<musicxml<k_f> >		S_f;
typedef SMARTP<musicxml<k_falloff> >		S_falloff;
typedef SMARTP<musicxml<k_feature> >		S_feature;
typedef SMARTP<musicxml<k_fermata> >		S_fermata;
typedef SMARTP<musicxml<k_ff> >		S_ff;
typedef SMARTP<musicxml<k_fff> >		S_fff;
typedef SMARTP<musicxml<k_ffff> >		S_ffff;
typedef SMARTP<musicxml<k_fffff> >		S_fffff;
typedef SMARTP<musicxml<k_ffffff> >		S_ffffff;
typedef SMARTP<musicxml<k_fifths> >		S_fifths;
typedef SMARTP<musicxml<k_figure> >		S_figure;
typedef SMARTP<musicxml<k_figure_number> >		S_figure_number;
typedef SMARTP<musicxml<k_figured_bass> >		S_figured_bass;
typedef SMARTP<musicxml<k_fingering> >		S_fingering;
typedef SMARTP<musicxml<k_fingernails> >		S_fingernails;
typedef SMARTP<musicxml<k_first_fret> >		S_first_fret;
typedef SMARTP<musicxml<k_footnote> >		S_footnote;
typedef SMARTP<musicxml<k_forward> >		S_forward;
typedef SMARTP<musicxml<k_fp> >		S_fp;
typedef SMARTP<musicxml<k_frame> >		S_frame;
typedef SMARTP<musicxml<k_frame_frets> >		S_frame_frets;
typedef SMARTP<musicxml<k_frame_note> >		S_frame_note;
typedef SMARTP<musicxml<k_frame_strings> >		S_frame_strings;
typedef SMARTP<musicxml<k_fret> >		S_fret;
typedef SMARTP<musicxml<k_function> >		S_function;
typedef SMARTP<musicxml<k_fz> >		S_fz;
typedef SMARTP<musicxml<k_glissando> >		S_glissando;
typedef SMARTP<musicxml<k_grace> >		S_grace;
typedef SMARTP<musicxml<k_group> >		S_group;
typedef SMARTP<musicxml<k_group_abbreviation> >		S_group_abbreviation;
typedef SMARTP<musicxml<k_group_abbreviation_display> >		S_group_abbreviation_display;
typedef SMARTP<musicxml<k_group_barline> >		S_group_barline;
typedef SMARTP<musicxml<k_group_name> >		S_group_name;
typedef SMARTP<musicxml<k_group_name_display> >		S_group_name_display;
typedef SMARTP<musicxml<k_group_symbol> >		S_group_symbol;
typedef SMARTP<musicxml<k_group_time> >		S_group_time;
typedef SMARTP<musicxml<k_grouping> >		S_grouping;
typedef SMARTP<musicxml<k_hammer_on> >		S_hammer_on;
typedef SMARTP<musicxml<k_harmonic> >		S_harmonic;
typedef SMARTP<musicxml<k_harmony> >		S_harmony;
typedef SMARTP<musicxml<k_harp_pedals> >		S_harp_pedals;
typedef SMARTP<musicxml<k_heel> >		S_heel;
typedef SMARTP<musicxml<k_humming> >		S_humming;
typedef SMARTP<musicxml<k_identification> >		S_identification;
typedef SMARTP<musicxml<k_image> >		S_image;
typedef SMARTP<musicxml<k_instrument> >		S_instrument;
typedef SMARTP<musicxml<k_instrument_abbreviation> >		S_instrument_abbreviation;
typedef SMARTP<musicxml<k_instrument_name> >		S_instrument_name;
typedef SMARTP<musicxml<k_instruments> >		S_instruments;
typedef SMARTP<musicxml<k_inversion> >		S_inversion;
typedef SMARTP<musicxml<k_inverted_mordent> >		S_inverted_mordent;
typedef SMARTP<musicxml<k_inverted_turn> >		S_inverted_turn;
typedef SMARTP<musicxml<k_key> >		S_key;
typedef SMARTP<musicxml<k_key_alter> >		S_key_alter;
typedef SMARTP<musicxml<k_key_octave> >		S_key_octave;
typedef SMARTP<musicxml<k_key_step> >		S_key_step;
typedef SMARTP<musicxml<k_kind> >		S_kind;
typedef SMARTP<musicxml<k_laughing> >		S_laughing;
typedef SMARTP<musicxml<k_left_margin> >		S_left_margin;
typedef SMARTP<musicxml<k_level> >		S_level;
typedef SMARTP<musicxml<k_line> >		S_line;
typedef SMARTP<musicxml<k_line_width> >		S_line_width;
typedef SMARTP<musicxml<k_link> >		S_link;
typedef SMARTP<musicxml<k_lyric> >		S_lyric;
typedef SMARTP<musicxml<k_lyric_font> >		S_lyric_font;
typedef SMARTP<musicxml<k_lyric_language> >		S_lyric_language;
typedef SMARTP<musicxml<k_measure> >		S_measure;
typedef SMARTP<musicxml<k_measure_distance> >		S_measure_distance;
typedef SMARTP<musicxml<k_measure_layout> >		S_measure_layout;
typedef SMARTP<musicxml<k_measure_numbering> >		S_measure_numbering;
typedef SMARTP<musicxml<k_measure_repeat> >		S_measure_repeat;
typedef SMARTP<musicxml<k_measure_style> >		S_measure_style;
typedef SMARTP<musicxml<k_metronome> >		S_metronome;
typedef SMARTP<musicxml<k_metronome_beam> >		S_metronome_beam;
typedef SMARTP<musicxml<k_metronome_dot> >		S_metronome_dot;
typedef SMARTP<musicxml<k_metronome_note> >		S_metronome_note;
typedef SMARTP<musicxml<k_metronome_relation> >		S_metronome_relation;
typedef SMARTP<musicxml<k_metronome_tuplet> >		S_metronome_tuplet;
typedef SMARTP<musicxml<k_metronome_type> >		S_metronome_type;
typedef SMARTP<musicxml<k_mf> >		S_mf;
typedef SMARTP<musicxml<k_midi_bank> >		S_midi_bank;
typedef SMARTP<musicxml<k_midi_channel> >		S_midi_channel;
typedef SMARTP<musicxml<k_midi_device> >		S_midi_device;
typedef SMARTP<musicxml<k_midi_instrument> >		S_midi_instrument;
typedef SMARTP<musicxml<k_midi_name> >		S_midi_name;
typedef SMARTP<musicxml<k_midi_program> >		S_midi_program;
typedef SMARTP<musicxml<k_midi_unpitched> >		S_midi_unpitched;
typedef SMARTP<musicxml<k_millimeters> >		S_millimeters;
typedef SMARTP<musicxml<k_miscellaneous> >		S_miscellaneous;
typedef SMARTP<musicxml<k_miscellaneous_field> >		S_miscellaneous_field;
typedef SMARTP<musicxml<k_mode> >		S_mode;
typedef SMARTP<musicxml<k_mordent> >		S_mordent;
typedef SMARTP<musicxml<k_movement_number> >		S_movement_number;
typedef SMARTP<musicxml<k_movement_title> >		S_movement_title;
typedef SMARTP<musicxml<k_mp> >		S_mp;
typedef SMARTP<musicxml<k_multiple_rest> >		S_multiple_rest;
typedef SMARTP<musicxml<k_music_font> >		S_music_font;
typedef SMARTP<musicxml<k_natural> >		S_natural;
typedef SMARTP<musicxml<k_non_arpeggiate> >		S_non_arpeggiate;
typedef SMARTP<musicxml<k_normal_dot> >		S_normal_dot;
typedef SMARTP<musicxml<k_normal_notes> >		S_normal_notes;
typedef SMARTP<musicxml<k_normal_type> >		S_normal_type;
typedef SMARTP<musicxml<k_notations> >		S_notations;
typedef SMARTP<musicxml<k_note> >		S_note;
typedef SMARTP<musicxml<k_note_size> >		S_note_size;
typedef SMARTP<musicxml<k_notehead> >		S_notehead;
typedef SMARTP<musicxml<k_octave> >		S_octave;
typedef SMARTP<musicxml<k_octave_change> >		S_octave_change;
typedef SMARTP<musicxml<k_octave_shift> >		S_octave_shift;
typedef SMARTP<musicxml<k_offset> >		S_offset;
typedef SMARTP<musicxml<k_open_string> >		S_open_string;
typedef SMARTP<musicxml<k_opus> >		S_opus;
typedef SMARTP<musicxml<k_ornaments> >		S_ornaments;
typedef SMARTP<musicxml<k_other_appearance> >		S_other_appearance;
typedef SMARTP<musicxml<k_other_articulation> >		S_other_articulation;
typedef SMARTP<musicxml<k_other_direction> >		S_other_direction;
typedef SMARTP<musicxml<k_other_dynamics> >		S_other_dynamics;
typedef SMARTP<musicxml<k_other_notation> >		S_other_notation;
typedef SMARTP<musicxml<k_other_ornament> >		S_other_ornament;
typedef SMARTP<musicxml<k_other_technical> >		S_other_technical;
typedef SMARTP<musicxml<k_p> >		S_p;
typedef SMARTP<musicxml<k_page_height> >		S_page_height;
typedef SMARTP<musicxml<k_page_layout> >		S_page_layout;
typedef SMARTP<musicxml<k_page_margins> >		S_page_margins;
typedef SMARTP<musicxml<k_page_width> >		S_page_width;
typedef SMARTP<musicxml<k_pan> >		S_pan;
typedef SMARTP<musicxml<k_part> >		S_part;
typedef SMARTP<musicxml<k_part_abbreviation> >		S_part_abbreviation;
typedef SMARTP<musicxml<k_part_abbreviation_display> >		S_part_abbreviation_display;
typedef SMARTP<musicxml<k_part_group> >		S_part_group;
typedef SMARTP<musicxml<k_part_list> >		S_part_list;
typedef SMARTP<musicxml<k_part_name> >		S_part_name;
typedef SMARTP<musicxml<k_part_name_display> >		S_part_name_display;
typedef SMARTP<musicxml<k_part_symbol> >		S_part_symbol;
typedef SMARTP<musicxml<k_pedal> >		S_pedal;
typedef SMARTP<musicxml<k_pedal_alter> >		S_pedal_alter;
typedef SMARTP<musicxml<k_pedal_step> >		S_pedal_step;
typedef SMARTP<musicxml<k_pedal_tuning> >		S_pedal_tuning;
typedef SMARTP<musicxml<k_per_minute> >		S_per_minute;
typedef SMARTP<musicxml<k_pitch> >		S_pitch;
typedef SMARTP<musicxml<k_plop> >		S_plop;
typedef SMARTP<musicxml<k_pluck> >		S_pluck;
typedef SMARTP<musicxml<k_pp> >		S_pp;
typedef SMARTP<musicxml<k_ppp> >		S_ppp;
typedef SMARTP<musicxml<k_pppp> >		S_pppp;
typedef SMARTP<musicxml<k_ppppp> >		S_ppppp;
typedef SMARTP<musicxml<k_pppppp> >		S_pppppp;
typedef SMARTP<musicxml<k_pre_bend> >		S_pre_bend;
typedef SMARTP<musicxml<k_prefix> >		S_prefix;
typedef SMARTP<musicxml<k_print> >		S_print;
typedef SMARTP<musicxml<k_pull_off> >		S_pull_off;
typedef SMARTP<musicxml<k_rehearsal> >		S_rehearsal;
typedef SMARTP<musicxml<k_relation> >		S_relation;
typedef SMARTP<musicxml<k_release> >		S_release;
typedef SMARTP<musicxml<k_repeat> >		S_repeat;
typedef SMARTP<musicxml<k_rest> >		S_rest;
typedef SMARTP<musicxml<k_rf> >		S_rf;
typedef SMARTP<musicxml<k_rfz> >		S_rfz;
typedef SMARTP<musicxml<k_right_margin> >		S_right_margin;
typedef SMARTP<musicxml<k_rights> >		S_rights;
typedef SMARTP<musicxml<k_root> >		S_root;
typedef SMARTP<musicxml<k_root_alter> >		S_root_alter;
typedef SMARTP<musicxml<k_root_step> >		S_root_step;
typedef SMARTP<musicxml<k_scaling> >		S_scaling;
typedef SMARTP<musicxml<k_schleifer> >		S_schleifer;
typedef SMARTP<musicxml<k_scoop> >		S_scoop;
typedef SMARTP<musicxml<k_scordatura> >		S_scordatura;
typedef SMARTP<musicxml<k_score_instrument> >		S_score_instrument;
typedef SMARTP<musicxml<k_score_part> >		S_score_part;
typedef SMARTP<musicxml<k_score_partwise> >		S_score_partwise;
typedef SMARTP<musicxml<k_score_timewise> >		S_score_timewise;
typedef SMARTP<musicxml<k_segno> >		S_segno;
typedef SMARTP<musicxml<k_senza_misura> >		S_senza_misura;
typedef SMARTP<musicxml<k_sf> >		S_sf;
typedef SMARTP<musicxml<k_sffz> >		S_sffz;
typedef SMARTP<musicxml<k_sfp> >		S_sfp;
typedef SMARTP<musicxml<k_sfpp> >		S_sfpp;
typedef SMARTP<musicxml<k_sfz> >		S_sfz;
typedef SMARTP<musicxml<k_shake> >		S_shake;
typedef SMARTP<musicxml<k_sign> >		S_sign;
typedef SMARTP<musicxml<k_slash> >		S_slash;
typedef SMARTP<musicxml<k_slash_dot> >		S_slash_dot;
typedef SMARTP<musicxml<k_slash_type> >		S_slash_type;
typedef SMARTP<musicxml<k_slide> >		S_slide;
typedef SMARTP<musicxml<k_slur> >		S_slur;
typedef SMARTP<musicxml<k_snap_pizzicato> >		S_snap_pizzicato;
typedef SMARTP<musicxml<k_software> >		S_software;
typedef SMARTP<musicxml<k_solo> >		S_solo;
typedef SMARTP<musicxml<k_sound> >		S_sound;
typedef SMARTP<musicxml<k_sounding_pitch> >		S_sounding_pitch;
typedef SMARTP<musicxml<k_source> >		S_source;
typedef SMARTP<musicxml<k_spiccato> >		S_spiccato;
typedef SMARTP<musicxml<k_staccatissimo> >		S_staccatissimo;
typedef SMARTP<musicxml<k_staccato> >		S_staccato;
typedef SMARTP<musicxml<k_staff> >		S_staff;
typedef SMARTP<musicxml<k_staff_details> >		S_staff_details;
typedef SMARTP<musicxml<k_staff_distance> >		S_staff_distance;
typedef SMARTP<musicxml<k_staff_layout> >		S_staff_layout;
typedef SMARTP<musicxml<k_staff_lines> >		S_staff_lines;
typedef SMARTP<musicxml<k_staff_size> >		S_staff_size;
typedef SMARTP<musicxml<k_staff_tuning> >		S_staff_tuning;
typedef SMARTP<musicxml<k_staff_type> >		S_staff_type;
typedef SMARTP<musicxml<k_staves> >		S_staves;
typedef SMARTP<musicxml<k_stem> >		S_stem;
typedef SMARTP<musicxml<k_step> >		S_step;
typedef SMARTP<musicxml<k_stopped> >		S_stopped;
typedef SMARTP<musicxml<k_stress> >		S_stress;
typedef SMARTP<musicxml<k_string> >		S_string;
typedef SMARTP<musicxml<k_strong_accent> >		S_strong_accent;
typedef SMARTP<musicxml<k_suffix> >		S_suffix;
typedef SMARTP<musicxml<k_supports> >		S_supports;
typedef SMARTP<musicxml<k_syllabic> >		S_syllabic;
typedef SMARTP<musicxml<k_system_distance> >		S_system_distance;
typedef SMARTP<musicxml<k_system_layout> >		S_system_layout;
typedef SMARTP<musicxml<k_system_margins> >		S_system_margins;
typedef SMARTP<musicxml<k_tap> >		S_tap;
typedef SMARTP<musicxml<k_technical> >		S_technical;
typedef SMARTP<musicxml<k_tenths> >		S_tenths;
typedef SMARTP<musicxml<k_tenuto> >		S_tenuto;
typedef SMARTP<musicxml<k_text> >		S_text;
typedef SMARTP<musicxml<k_thumb_position> >		S_thumb_position;
typedef SMARTP<musicxml<k_tie> >		S_tie;
typedef SMARTP<musicxml<k_tied> >		S_tied;
typedef SMARTP<musicxml<k_time> >		S_time;
typedef SMARTP<musicxml<k_time_modification> >		S_time_modification;
typedef SMARTP<musicxml<k_toe> >		S_toe;
typedef SMARTP<musicxml<k_top_margin> >		S_top_margin;
typedef SMARTP<musicxml<k_top_system_distance> >		S_top_system_distance;
typedef SMARTP<musicxml<k_touching_pitch> >		S_touching_pitch;
typedef SMARTP<musicxml<k_transpose> >		S_transpose;
typedef SMARTP<musicxml<k_tremolo> >		S_tremolo;
typedef SMARTP<musicxml<k_trill_mark> >		S_trill_mark;
typedef SMARTP<musicxml<k_triple_tongue> >		S_triple_tongue;
typedef SMARTP<musicxml<k_tuning_alter> >		S_tuning_alter;
typedef SMARTP<musicxml<k_tuning_octave> >		S_tuning_octave;
typedef SMARTP<musicxml<k_tuning_step> >		S_tuning_step;
typedef SMARTP<musicxml<k_tuplet> >		S_tuplet;
typedef SMARTP<musicxml<k_tuplet_actual> >		S_tuplet_actual;
typedef SMARTP<musicxml<k_tuplet_dot> >		S_tuplet_dot;
typedef SMARTP<musicxml<k_tuplet_normal> >		S_tuplet_normal;
typedef SMARTP<musicxml<k_tuplet_number> >		S_tuplet_number;
typedef SMARTP<musicxml<k_tuplet_type> >		S_tuplet_type;
typedef SMARTP<musicxml<k_turn> >		S_turn;
typedef SMARTP<musicxml<k_type> >		S_type;
typedef SMARTP<musicxml<k_unpitched> >		S_unpitched;
typedef SMARTP<musicxml<k_unstress> >		S_unstress;
typedef SMARTP<musicxml<k_up_bow> >		S_up_bow;
typedef SMARTP<musicxml<k_voice> >		S_voice;
typedef SMARTP<musicxml<k_volume> >		S_volume;
typedef SMARTP<musicxml<k_wavy_line> >		S_wavy_line;
typedef SMARTP<musicxml<k_wedge> >		S_wedge;
typedef SMARTP<musicxml<k_with_bar> >		S_with_bar;
typedef SMARTP<musicxml<k_word_font> >		S_word_font;
typedef SMARTP<musicxml<k_words> >		S_words;
typedef SMARTP<musicxml<k_work> >		S_work;
typedef SMARTP<musicxml<k_work_number> >		S_work_number;
typedef SMARTP<musicxml<k_work_title> >		S_work_title;
}
#endif
